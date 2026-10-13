/* Entry 0x088DF650 | file offset 0x000DC628 | FUN_088df650 | bytes 80 */

undefined4 FUN_088df650(undefined1 *param_1,int param_2)

{
  undefined4 uVar1;
  
  FUN_088df54c();
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

