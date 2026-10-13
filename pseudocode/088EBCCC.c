/* Entry 0x088EBCCC | file offset 0x000E8CA4 | FUN_088ebccc | bytes 264 */

void FUN_088ebccc(int param_1,int param_2,undefined1 param_3)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)0x0;
  if (param_2 < 1) {
    if (-1 < param_2) {
      FUN_088ece20(&DAT_09b69890);
      puVar1 = &DAT_09b69890;
    }
  }
  else if (param_2 < 2) {
    FUN_088ec6e8(&DAT_09b69890);
    puVar1 = &DAT_09b69890;
  }
  else if (param_2 < 3) {
    puVar1 = &DAT_09b69890;
    FUN_088ec944(&DAT_09b69890);
  }
  if (puVar1 == (undefined *)0x0) {
    puVar1 = &DAT_09b69890;
    FUN_088ec6e8(&DAT_09b69890);
  }
  FUN_088ebdd4(param_1,puVar1,param_3);
  *(undefined1 *)(param_1 + 0x53) = 1;
  return;
}

