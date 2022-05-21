import java.lang.*;

interface Circle
{
    float PI = 3.14f;           // public static final PI = 3.14f;

    float CalculateArea(float Radius);      // public abstract float CalculateArea(float Radius);
    float CalculateCircumfarance(float Radius);  // public abstract float CalculateCircumfarance(float Radius);
}

class Area implements Circle
{
    public float CalculateArea(float Radius)
    {
        return (PI * Radius * Radius);
    }

    public float CalculateCircumfarance(float Radius)
    {
        return (2 * PI * Radius);
    }
}

class Marvellous1
{
    public static void main(String arg[])
    {
        System.out.println("Value of PI is : "+Circle.PI);
        // Circle.PI = 6.14;

        Area obj  =  new Area();
        float fRet = 0.0f;

        fRet = obj.CalculateArea(10.5f);
        System.out.println("Area is : "+fRet);

        fRet = obj.CalculateCircumfarance(10.5f);
        System.out.println("Circumfarance is : "+fRet);
    }
}