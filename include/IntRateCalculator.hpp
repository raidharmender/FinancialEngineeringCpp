class IntRateCalculator {
    public:
        IntRateCalculator(double Rate);
        IntRateCalculator(const IntRateCalculator &v);
        IntRateCalculator &operator =(const IntRateCalculator &v);

        ~IntRateCalculator();

        double singlePeriod(double value);
    private:
        double m_rate;
};