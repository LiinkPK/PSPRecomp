/* Entry 0x089BCD70 | file offset 0x001B9D48 | FUN_089bcd70 | bytes 56 */

int FUN_089bcd70(int param_1,uint param_2,int param_3)

{
  ushort uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(ushort *)(param_1 + 8);
    while( true ) {
      if (uVar1 == param_2) {
        param_3 = param_3 + -1;
        if (param_3 < 0) {
          return param_1;
        }
        param_1 = *(int *)(param_1 + 4);
      }
      else {
        param_1 = *(int *)(param_1 + 4);
      }
      if (param_1 == 0) break;
      uVar1 = *(ushort *)(param_1 + 8);
    }
  }
  return 0;
}

