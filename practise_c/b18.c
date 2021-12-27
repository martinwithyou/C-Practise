#include<stdio.h>
#include <graphics.h>      // “˝”√Õº–Œø‚Õ∑Œƒº˛
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include<time.h>
int hight = 800;//∂®“Âª≠√Ê≥ﬂ¥Á
int width = 800;

int cube_x,cube_y;//∂®“Â∑ΩøÈµƒ◊¯±Í

int kind;//∂®“Â∑ΩøÈµƒ÷÷¿‡

int v=0;//∂®“Â∑ΩøÈµƒœ¬¬‰ÀŸ∂»

int a; //∂®“Âœ¬¬‰ÀŸ∂»

int bottom_y;//∂®“Â√ø∏ˆ∑ΩøÈµƒµ◊≤ø
int bottom_x[4];//∂®“Â√ø∏ˆ∑ΩøÈµƒµ◊≤ø

int view[800][800] = {0};//∂®“Â’˚∏ˆª≠√Êµƒ∂˛Œ¨ ˝◊È
void updatewithpeople();//”Î”√ªß ‰»Î”–πÿµƒ∫Ø ˝
void updatewithoutpeople();//”Î”√ªß ‰»ÎŒﬁπÿµƒ∫Ø ˝
void star();//≥ı ºªØ∫Ø ˝
void show();//œ‘ æ∫Ø ˝
void gameover();//”Œœ∑Ω· ¯
void search();

int main()
{
    star();
    while(1)
    {
        updatewithpeople();
        updatewithoutpeople();
        show();
        
    }
    return 0;
}
void updatewithpeople()//”Î”√ªß ‰»Î”–πÿµƒ∫Ø ˝
{
    
    if(GetAsyncKeyState(0x41)&0x8000)//œÚ◊Û“∆∂Ø
    {
        Sleep(10);
        if(GetAsyncKeyState(0x41)&0x8000)//Ω¯––œ˚∂∂
        {
            if(cube_x>=0)
            {
                cube_x-=40;
                switch(kind)//«Â≥˝”“±ﬂµƒ∑ΩøÈ
                {
                    case 0:view[cube_x+80][cube_y]=0;view[cube_x+80][cube_y+40]=0;break;
                    case 1:view[cube_x+80][cube_y]=0;view[cube_x+80][cube_y+40]=0;break;
                    case 2:view[cube_x+80][cube_y]=0;view[cube_x+120][cube_y+40]=0;break;
                    case 3:view[cube_x+80][cube_y]=0;view[cube_x+40][cube_y+40]=0;break;
                    case 4:view[cube_x+160][cube_y]=0;break;
                    case 5:view[cube_x+40][cube_y]=0;view[cube_x+120][cube_y+40]=0;break;
                    case 6:view[cube_x+40][cube_y]=0;view[cube_x+40][cube_y+40]=0;break;
                    case 7:view[cube_x+40][cube_y]=0;view[cube_x+80][cube_y+40]=0;break;
                }
            }
        }
        while(GetAsyncKeyState(0x41)&0x8000);
    }
    if(GetAsyncKeyState(0x44)&0x8000)//œÚ”““∆∂Ø
    {
        Sleep(10);
        if(GetAsyncKeyState(0x44)&0x8000)
        {
            if(cube_x<=800)
            {
                cube_x+=40;
                switch(kind)//«Â≥˝◊Û±ﬂµƒ∑ΩøÈ
                {
                    case 0:view[cube_x-40][cube_y]=0;view[cube_x-40][cube_y+40]=0;break;
                    case 1:view[cube_x-40][cube_y]=0;view[cube_x-40][cube_y+40]=0;break;
                    case 2:view[cube_x-40][cube_y]=0;view[cube_x][cube_y+40]=0;break;
                    case 3:view[cube_x-40][cube_y]=0;view[cube_x-80][cube_y+40]=0;break;
                    case 4:view[cube_x-40][cube_y]=0;break;
                    case 5:view[cube_x-40][cube_y]=0;view[cube_x-40][cube_y+40]=0;break;
                    case 6:view[cube_x-40][cube_y]=0;view[cube_x-120][cube_y+40]=0;break;
                    case 7:view[cube_x-40][cube_y]=0;view[cube_x-80][cube_y+40]=0;break;
                }
            }
        }
        while(GetAsyncKeyState(0x44)&0x8000);
    }
    if(GetAsyncKeyState(VK_SPACE)&0x8000)
    {
        Sleep(10);
        if(GetAsyncKeyState(VK_SPACE)&0x8000)//ø’∏Òº¸ Ω¯–––˝◊™
        {
            switch(kind)
            {
                case 0:break;
                case 1:break;
                case 2:break;
                case 3:break;
                case 4:break;
                case 5:break;
                case 6:break;
                case 7:break;
            }
        }
        while(GetAsyncKeyState(VK_SPACE)&0x8000);
    }
}
void updatewithoutpeople()//”Î”√ªß ‰»ÎŒﬁπÿµƒ∫Ø ˝
{
    int j,k;
    int x,y;
    srand(time(NULL));
    if(v==0)
    {
        cube_x=400;
        cube_y=0;
        kind=rand()%7; //ÀÊª˙≤˙…˙“ª÷÷∑ΩøÈ
        v=1;//µ±v=0µƒ ±∫Ú£¨‘⁄÷ÿ–¬À¢–¬¡Ì“ª÷÷∑ΩøÈ
    }
    
    if(kind==4)
        bottom_y=cube_y;
    else
        bottom_y=cube_y+40;
    switch(kind)// µœ÷…œ“ª∏ˆ∑ΩøÈµƒ«Â¡„
    {
        case 0:
            view[cube_x][cube_y]=0;
            view[cube_x+40][cube_y]=0;
            view[cube_x][cube_y+40]=0;
            view[cube_x+40][cube_y+40]=0;break;
        case 1:
            view[cube_x][cube_y]=0;
            view[cube_x+40][cube_y]=0;
            view[cube_x][cube_y+40]=0;
            view[cube_x+40][cube_y+40]=0;break;
        case 2:
            view[cube_x][cube_y]=0;
            view[cube_x+40][cube_y]=0;
            view[cube_x+40][cube_y+40]=0;
            view[cube_x+80][cube_y+40]=0;break;
        case 3:
            view[cube_x][cube_y]=0;
            view[cube_x+40][cube_y]=0;
            view[cube_x][cube_y+40]=0;
            view[cube_x-40][cube_y+40]=0;break;
        case 4:
            view[cube_x][cube_y]=0;
            view[cube_x+40][cube_y]=0;
            view[cube_x+80][cube_y]=0;
            view[cube_x+120][cube_y]=0;break;
        case 5:
            view[cube_x][cube_y]=0;
            view[cube_x][cube_y+40]=0;
            view[cube_x+40][cube_y+40]=0;
            view[cube_x+80][cube_y+40]=0;break;
        case 6:
            view[cube_x][cube_y]=0;
            view[cube_x][cube_y+40]=0;
            view[cube_x-40][cube_y+40]=0;
            view[cube_x-80][cube_y+40]=0;break;
        case 7:
            view[cube_x][cube_y]=0;
            view[cube_x][cube_y+40]=0;
            view[cube_x-40][cube_y+40]=0;
            view[cube_x+40][cube_y+40]=0;break;
    }
    
    switch(kind)//”√¿¥≈–∂œ∏˜÷÷∑ΩøÈ «∑Ò”¶∏√œ¬¬‰
    {
        case 0:
            if(view[cube_x][bottom_y+40]!=1&&bottom_y<760)
            {
                a++;
                if(a>400)
                {
                    cube_y+=40;
                    a=0;
                }
            }
            else
                v=0;search();break;
        case 1:
            if(view[cube_x][bottom_y+40]!=1&&bottom_y<760)
            {
                a++;
                if(a>400)
                {
                    cube_y+=40;
                    a=0;
                }
            }
            else
                v=0;search();break;
        case 2:
            if(view[cube_x+40][bottom_y+40]!=1&&view[cube_x+80][bottom_y+40]!=1&& bottom_y<760)
            {
                a++;
                if(a>400)
                {
                    cube_y+=40;
                    a=0;
                }
            }
            else
                v=0;search();break;
        case 3:
            if(view[cube_x][bottom_y+40]!=1&&view[cube_x-40][bottom_y+40]!=1&&bottom_y<760)
            {
                a++;
                if(a>400)
                {
                    cube_y+=40;
                    a=0;
                }
            }
            else
                v=0;search();break;
        case 4:
            if(view[cube_x][bottom_y+40]!=1&&view[cube_x+40][bottom_y+40]!=1&&view[cube_x+80][bottom_y+40]!=1&&view[cube_x+120][bottom_y+40]!=1&&bottom_y<760)
            {
                a++;
                if(a>200)
                {
                    cube_y+=40;
                    a=0;
                }
            }
            else
                v=0;search();break;
        case 5:
            if(view[cube_x][bottom_y+40]!=1&&view[cube_x+40][bottom_y+40]!=1&&view[cube_x+80][bottom_y+40]!=1&&bottom_y<760)
            {
                a++;
                if(a>400)
                {
                    cube_y+=40;
                    a=0;
                }
            }
            else
                v=0;search();break;
        case 6:
            if(view[cube_x][bottom_y+40]!=1&&view[cube_x-40][bottom_y+40]!=1&&view[cube_x-80][bottom_y+40]!=1&&bottom_y<760)
            {
                a++;
                if(a>400)
                {
                    cube_y+=40;
                    a=0;
                }
            }
            else
                v=0;search();break;
        case 7:
            if(view[cube_x][bottom_y+40]!=1&&view[cube_x+40][bottom_y+40]!=1&&view[cube_x-40][bottom_y+40]!=1&&bottom_y<760)
            {
                a++;
                if(a>400)
                {
                    cube_y+=40;
                    a=0;
                }
            }
            else
                v=0;search();break;
    }
    switch(kind)// µœ÷∏˜÷÷∑ΩøÈµƒªÊ÷∆
    {
        case 0:
            view[cube_x][cube_y]=1;
            view[cube_x+40][cube_y]=1;
            view[cube_x][cube_y+40]=1;
            view[cube_x+40][cube_y+40]=1;break;
        case 1:
            view[cube_x][cube_y]=1;
            view[cube_x+40][cube_y]=1;
            view[cube_x][cube_y+40]=1;
            view[cube_x+40][cube_y+40]=1;break;
        case 2:
            view[cube_x][cube_y]=1;
            view[cube_x+40][cube_y]=1;
            view[cube_x+40][cube_y+40]=1;
            view[cube_x+80][cube_y+40]=1;break;
        case 3:
            view[cube_x][cube_y]=1;
            view[cube_x+40][cube_y]=1;
            view[cube_x][cube_y+40]=1;
            view[cube_x-40][cube_y+40]=1;break;
        case 4:
            view[cube_x][cube_y]=1;
            view[cube_x+40][cube_y]=1;
            view[cube_x+80][cube_y]=1;
            view[cube_x+120][cube_y]=1;break;
        case 5:
            view[cube_x][cube_y]=1;
            view[cube_x][cube_y+40]=1;
            view[cube_x+40][cube_y+40]=1;
            view[cube_x+80][cube_y+40]=1;break;
        case 6:
            view[cube_x][cube_y]=1;
            view[cube_x][cube_y+40]=1;
            view[cube_x-40][cube_y+40]=1;
            view[cube_x-80][cube_y+40]=1;break;
        case 7:
            view[cube_x][cube_y]=1;
            view[cube_x][cube_y+40]=1;
            view[cube_x-40][cube_y+40]=1;
            view[cube_x+40][cube_y+40]=1;break;
    }
    
    //≈–∂œ «∑Ò¬˙◊„“ª––
    
    
}
void star()//≥ı ºªØ∫Ø ˝
{
    cube_x=400;//∂®“Â∑ΩøÈµƒ≥ı ºŒª÷√
    cube_y=0;
    view[cube_x][cube_y]=1;
    initgraph(hight, width);//¥¥Ω®800*800µƒ∆Â≈Ã
}
void show()//œ‘ æ∫Ø ˝
{
    srand(time(NULL));
    BeginBatchDraw();
    int x,y;
    cleardevice();
    for(x=0;x<800;x+=40)//ª≠∂Ì¬ﬁÀπ∑ΩøÈµƒ∆Â≈ÃœﬂÃı
    {
        line(x,0,x,800);
    }
    for(y=0;y<800;y+=40)
    {
        line(0,y,800,y);
    }
    setlinecolor(RGB(255,255,255));
    if(v==0)
    {
        setfillcolor(RGB(rand()%255,rand()%255,rand()%255));//≤˙…˙ÀÊª˙—’…´µƒ∑ΩøÈ£ª
    }
    for(x=0;x<800;x+=40)
        for(y=0;y<800;y+=40)
        {
            if(view[x][y]==1||view[x][y]==2)
                fillrectangle(x,y,x+40,y+40);
        }
    FlushBatchDraw();
}
void gameover()//”Œœ∑Ω· ¯
{}
void search()//¬˙“ª––£¨œ˚≥˝£¨Õ¨ ±…œ“ª––»´≤øœ¬“∆
{
    int x,y,j;
    int number=0;
    for(y=0;y<800;y+=40)
    {
        for(x=0;x<800;x+=40)
        {
            if(view[x][y]==1)
            {
                number++;
            }
        }
        if(number==20)
        {
            j=0;
            while(j<=760)
            {
                view[j][y]=0;
                j+=40;
            }
            j=y-40;
            for(;j>=0;j-=40)
                for(x=0;x<800;x+=40)
                {
                    if(view[x][j]==1)
                    {
                        view[x][j]=0;
                        view[x][j+40]=1;
                    }
                }
            
        }
        number=0;
    }
    
    
}

