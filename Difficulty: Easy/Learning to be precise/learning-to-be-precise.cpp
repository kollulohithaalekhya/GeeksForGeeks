void precise(float a, float b) {
    // perform a/b
    float c;
    c=a/b;
    cout << c << " " << setprecision(3)
         << fixed<<c << endl;
}