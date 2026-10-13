/* Entry 0x08917758 | file offset 0x00114730 | FUN_08917758 | bytes 92 */

void FUN_08917758(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = func_0x08b48684();
  *(undefined4 *)(DAT_089d83d8 + 0x44) = uVar1;
  iVar2 = FUN_08912fa4(*(undefined4 *)(DAT_089d83d8 + 0x44));
  *(int *)(DAT_089d83d8 + 0x38) = (int)*(short *)(iVar2 + 8);
  FUN_08914e58(DAT_089d83d8);
  FUN_08865190(DAT_089d83d8 + 4);
  return;
}

