/* Entry 0x088B16FC | file offset 0x000AE6D4 | FUN_088b16fc | bytes 104 */

void FUN_088b16fc(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = FUN_08882274(DAT_089d69a8);
    uVar1 = FUN_088823c4(uVar1,0xffffffff,87000,FUN_088b19e0,"Update");
    *(undefined4 *)(param_1 + 4) = uVar1;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}

