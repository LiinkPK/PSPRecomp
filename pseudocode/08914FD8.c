/* Entry 0x08914FD8 | file offset 0x00111FB0 | FUN_08914fd8 | bytes 112 */

void FUN_08914fd8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0891705c(0xffffffff);
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 1;
  FUN_08912af8(uVar1,0);
  FUN_08916f78(0,FUN_08917b40);
  FUN_089168a4(param_1,0x3c);
  FUN_08914c18(param_1);
  FUN_08914b64(param_1,9);
  return;
}

