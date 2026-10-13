/* Entry 0x088B7B18 | file offset 0x000B4AF0 | FUN_088b7b18 | bytes 112 */

uint FUN_088b7b18(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_088c7f78((int)*(short *)(param_1 + 0x9a + param_2 * 2));
  if (iVar1 == 1) {
    uVar2 = (uint)*(ushort *)(param_1 + 0x9a + param_2 * 2);
  }
  else {
    uVar2 = (uint)*(short *)(param_1 + 0x9a + param_2 * 2);
  }
  return uVar2;
}

