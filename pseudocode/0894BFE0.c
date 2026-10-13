/* Entry 0x0894BFE0 | file offset 0x00148FB8 | FUN_0894bfe0 | bytes 100 */

int FUN_0894bfe0(float param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = (uint)*(byte *)(param_3 + 0x13);
  iVar1 = 0;
  if (uVar3 != 0) {
    puVar2 = *(undefined4 **)(param_3 + 0x24);
    do {
      if (param_1 <= (float)(int)*(short *)*puVar2) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar1 < (int)uVar3);
  }
  return uVar3 - 1;
}

