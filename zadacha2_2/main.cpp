#include <iostream>

using namespace std;

class Paralleleppiped
{
private:
    int height;
    int lenght;
    int width;
    int volume;
public:
    int FigureVolume()
    {
        int a = height;
        int b = lenght;
        int c = width;
        cout << "Введите высоту фигуры: "; cin >> a;
        cout << "Введите длину фигуры: ";  cin >> b;
        cout << "Введите ширину фигуры: "; cin >> c;

        volume = a*b*c;
        return volume;
    }
};

class MetalBrus : public Paralleleppiped
{
public:
    int udel_weight;
    int brus_weight;

    int BrusWeight(int volume, int plotn)
    {
        int massa;
        massa = (volume/1000)*plotn;
        brus_weight = massa*10;
        cout << "Вес бруса = " << brus_weight << " Ньютон" << "\n";
        return brus_weight;
    }

    void BrusUedlWeight(int volume, int weight)
    {
        udel_weight = weight/volume;
        cout << "Удельный вес = " << udel_weight << " Н/м^3" << "\n";
    }
};

int main()
{
    int vol;
    int plotn;
    int weight;
    MetalBrus brus;
    vol = brus.FigureVolume();
    cout << "Введите плотность материала: ";
    cin >> plotn;
    weight = brus.BrusWeight(vol, plotn);
    brus.BrusUedlWeight(vol, weight);

    return 0;
}
