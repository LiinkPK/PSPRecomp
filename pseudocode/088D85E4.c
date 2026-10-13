/* Entry 0x088D85E4 | file offset 0x000D55BC | FUN_088d85e4 | bytes 80 */

undefined4 FUN_088d85e4(undefined1 *param_1,int param_2)

{
  undefined4 uVar1;
  
  FUN_088d85a4();
  if (param_2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    *(int *)(param_1 + 4) = param_2;
    *param_1 = 1;
    uVar1 = 0;
  }
  return uVar1;
}

