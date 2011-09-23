#include <iostream>
#include <vector>
#include <time.h>

#ifndef _AGE_H_
#define _AGE_H_

class Age {
      typedef time_t Date;
      
      public:
             Age();
             int getCurrentAge();
             void setCurrentAge(int age);
             Date getBirthday();
      
      private:
              int age;
              Date birthday;
};
#endif
