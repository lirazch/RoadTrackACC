import matplotlib.pyplot as plt


def plot_bumpers(big_df):
    for r in big_df[big_df['cat_id'].isin([4, 40])][['sheet', 'file']].drop_duplicates().iterrows():
        sheet = r[1]['sheet']
        file = r[1]['file']
        if '2404' not in file and '2604' not in file:

            fig, ax = plt.subplots(figsize=(18, 4))
            df = big_df[(big_df['cat_id'].isin([4, 40])) & (big_df.sheet == sheet) & (big_df.file == file)]

            print(len(df))
            ax.plot(df.index, df['Speed'])
            ax.plot(df.index, df['Vertical'])
            ax.set_title(sheet + ' ' + df['file'].iloc[0])
            for i, bump in enumerate(df.bumper_on[df.bumper_on == 1].iteritems()):
                ax.axvline(x=bump[0], color='r', alpha=0.01)

