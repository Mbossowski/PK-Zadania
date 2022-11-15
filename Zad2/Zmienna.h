template <typename T>
class Zmienna
{
	private:
		T Var;
	public:
		void Input(const T In)
		{
			Var = In;
		}
	
		void Display()
		{
			std::cout << Var << std::endl;
		}
};
