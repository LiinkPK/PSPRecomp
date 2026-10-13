/* Entry 0x08810A20 | file offset 0x0000D9F8 | FUN_08810a20 | bytes 104 */

undefined4 FUN_08810a20(undefined1 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  FUN_08810a04();
  if ((param_2 == 0) || (param_3 < 0)) {
    uVar1 = 0xffffffff;
  }
  else {
    *(int *)(param_1 + 4) = param_2;
    *(int *)(param_1 + 8) = param_3;
    *param_1 = 1;
    uVar1 = 0;
  }
  return uVar1;
}

