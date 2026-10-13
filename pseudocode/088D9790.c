/* Entry 0x088D9790 | file offset 0x000D6768 | FUN_088d9790 | bytes 104 */

undefined4 FUN_088d9790(undefined1 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  FUN_088d9750();
  if ((param_2 == 0) || (param_3 == 0)) {
    uVar1 = 0xffffffff;
  }
  else {
    *(int *)(param_1 + 8) = param_2;
    *(int *)(param_1 + 0xc) = param_3;
    *param_1 = 1;
    uVar1 = 0;
  }
  return uVar1;
}

