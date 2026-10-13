/* Entry 0x089AB30C | file offset 0x001A82E4 | FUN_089ab30c | bytes 56 */

undefined4 FUN_089ab30c(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (param_3 != 0) {
    cVar2 = *param_1;
    while( true ) {
      cVar1 = *param_2;
      param_3 = param_3 + -1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      uVar3 = 1;
      if (cVar2 != cVar1) break;
      if (param_3 == 0) {
        return 0;
      }
      cVar2 = *param_1;
    }
  }
  return uVar3;
}

