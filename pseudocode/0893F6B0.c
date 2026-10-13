/* Entry 0x0893F6B0 | file offset 0x0013C688 | FUN_0893f6b0 | bytes 68 */

char * FUN_0893f6b0(char *param_1,char param_2,int param_3)

{
  while( true ) {
    if (param_3 == 0) {
      return (char *)0x0;
    }
    param_3 = param_3 + -1;
    if (*param_1 == param_2) break;
    param_1 = param_1 + 1;
  }
  return param_1;
}

