int migratoryBirds(vector<int> arr)
{
    std::array<int,5> arr_count{};
    
    for (auto n : arr)
    {
        arr_count[n-1]++;
    }
    
    int max = arr_count[0];
    int result = 1;
    for (size_t i = 1; i < arr_count.size(); ++i)
    {
        if (arr_count[i] > max)
        {
            max = arr_count[i];
            result = i+1;
        }
    }
    
    return result;
}

int migratoryBirds2(vector<int> arr)
{
    vector<int> count_arr(6);

    for (size_t i = 0; i < arr.size(); ++i)
    {
        count_arr[arr[i]]++;
    }

    int max = count_arr[1];
    int type = 1;

    for (size_t i = 2; i < count_arr.size(); ++i)
    {
        if (max < count_arr[i])
        {
            max = count_arr[i];
            type = i;
        }
    }

    return type;
}
