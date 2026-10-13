/* Entry 0x0893F888 | file offset 0x0013C860 | FUN_0893f888 | bytes 112 */

void FUN_0893f888(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  if (param_1 != 0) {
    iVar2 = 0;
    piVar3 = *(int **)(param_1 + 0xc);
    if (*(short *)(param_1 + 6) != 0) {
      do {
        puVar1 = (undefined4 *)*piVar3;
        (*(code *)puVar1[2])(puVar1[1],*puVar1);
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar2 < (int)(uint)*(ushort *)(param_1 + 6));
    }
  }
  return;
}

