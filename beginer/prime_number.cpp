//
// Created by 鹄思鹄想_bit森 on 2022/4/4.
//
// 素数的筛选
//
#include

#include

#define N 1000

int main(int argc, char* argv[])

{undefined

    int i,j,num[N];

    for(i=0;i

            num[i]=i+1;

            for(i=1;i

                    {undefined

                            if(num[i])

                            {undefined

                                for(j=i+1;j

                                        {undefined

                                                if(num[j])

                                                if(num[j]%num[i]==0)

                                                num[j]=0;

                                        }

                            }

                    }

                    for(i=1;i

                            if(num[i])

                                printf(" %d",num[i]);

    return 0;

}
