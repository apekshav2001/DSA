
   int n;
   cin >> n;
   int i = 0;
   int ans = 0;
   while (n != 0)
   {
      int digit = n % 10;
      if (digit == 1)
      {
         int ans = pow(2, i) + ans;
      }
      n = n / 10;
      i++;
   }
   cout << ans;
}