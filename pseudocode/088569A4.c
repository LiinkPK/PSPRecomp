/* Entry 0x088569A4 | file offset 0x0005397C | FUN_088569a4 | bytes 72 */

void FUN_088569a4(int param_1)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 0x70) = 1;
  *(undefined4 *)(param_1 + 0x134) = 0;
  uVar1 = FUN_088d107c(DAT_089d7830,FUN_08857108,0);
  *(undefined4 *)(param_1 + 0x138) = uVar1;
  return;
}

