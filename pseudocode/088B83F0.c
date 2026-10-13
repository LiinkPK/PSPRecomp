/* Entry 0x088B83F0 | file offset 0x000B53C8 | FUN_088b83f0 | bytes 36 */

void FUN_088b83f0(int param_1,undefined1 param_2)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x762) = param_2;
  iVar1 = 0;
  do {
    *(undefined1 *)(param_1 + 0xb6) = param_2;
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 0xc6;
  } while (iVar1 < 5);
  return;
}

