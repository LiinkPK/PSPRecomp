/* Entry 0x089B1230 | file offset 0x001AE208 | FUN_089b1230 | bytes 60 */

int FUN_089b1230(int param_1,uint param_2,int param_3)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 4);
    while (iVar1 != 0) {
      if (*(ushort *)(iVar1 + 0xe) == param_2) {
        param_3 = param_3 + -1;
        if (param_3 < 0) {
          return iVar1;
        }
        iVar1 = *(int *)(iVar1 + 4);
      }
      else {
        iVar1 = *(int *)(iVar1 + 4);
      }
    }
  }
  return 0;
}

