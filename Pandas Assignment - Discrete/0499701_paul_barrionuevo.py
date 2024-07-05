import pandas as pd
import matplotlib.pyplot as plt
import numpy as np

"""
Paul B
12/01/23

1. Which months have more fires?
2. Which states have more fires?
3. Which states are more prone to fire?
4. What are the trends on fires in different states?
"""

def read_file(filename):
    # Create variable to store data frame
    df = pd.read_csv(filename, encoding='latin-1')
    return df

def month_of_fires(df):
    new_list = []
    data_tuple = ()
    df_months = df["month"].unique().tolist()

    for month in df_months:
        value_month = df[df["month"] == month]
        value_number = value_month["number"].sum()
        data_tuple = (month, value_number)
        new_list.append(data_tuple)
        #print("for month:", month, "the number of fires is:", value_number)
        #print(value_m, value_number)
    return new_list

def states_fires(df):
    df_states = df["state"].unique().tolist()
    sorted_list = []
    new_list = []
    data_tuple = ()

    for state in df_states:
        value_state = df[df["state"] == state]
        value_number = value_state["number"].sum()
        data_tuple = (state, value_number)
        new_list.append(data_tuple)
        # Sort list in order to print states in order by number of fires
        sorted_list = sorted(new_list, key=lambda x:x[1], reverse=True)
        # print(sorted_list)
    return sorted_list

def plot_months_fires(df):
    # Function that allows data visualization  
    data = month_of_fires(df)
    month, fires = zip(*data)

    # Months with more number of fires
    plt.figure(figsize=(10, 6))
    plt.bar(month, fires)
    plt.xlabel('Months', fontsize=10)
    plt.ylabel('Number of Fires')
    plt.title('Number of Fires for Each Month', fontsize=12)
    plt.xticks(rotation=45, ha='right', fontsize=8)
    plt.tight_layout()
    plt.show()

def plot_states_fires(df):
    # Function that allows data visualization  
    data = states_fires(df)
    states, fires = zip(*data)
    
    # States with more number of fires
    plt.figure(figsize=(10, 6))
    plt.bar(states, fires)
    plt.xlabel('State', fontsize=10)
    plt.ylabel('Number of Fires')
    plt.title('Number of Fires for Each State', fontsize=12)
    plt.xticks(rotation=45, ha='right', fontsize=8)
    plt.tight_layout()
    plt.show()

def trend_hotest_states(list_of_states, df):
    # Add fires every year for the top 5 states
    top_5 = sorted(list_of_states, key=lambda x: x[1], reverse=True)[:5]

    all_states = df['state'].unique().tolist()

    for state, _ in top_5:
        if state in all_states:
            state_data = df[df["state"] == state]
            state_data_grouped = state_data.groupby("year")["number"].sum().reset_index()
            
            years = state_data_grouped["year"].tolist()
            fires = state_data_grouped["number"].tolist()

            plt.plot(years, fires, label=state)

    plt.xlabel('Year')
    plt.ylabel('Number of Fires')
    plt.title('Trend of Fires for Top 5 States')
    plt.legend()
    plt.show()


def main():

    # File path to CVS file
    file_path = "C:\\Users\\pable\\OneDrive\\Documentos\\Ohlone\\Discrete Structures\\Pandas Assiggment\\forest_fires_amazon.csv"
    df = read_file(file_path) # Function to read file and create a Data Frame
    mf = month_of_fires(df)   # Function to obtain number of fires per month
    sf = states_fires(df)     # Function to obtain number of fires per state
    plot_mf = plot_months_fires(df)     # Plot months with more number of fires
    plot_sf = plot_states_fires(df)     # Plot states with more number of fires
    trend = trend_hotest_states(sf, df) # Trend of the 5 hotest states
    print(trend)
    print(plot_sf)
    print(plot_mf)



if __name__ == "__main__":
    main()
