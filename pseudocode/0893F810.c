/* Entry 0x0893F810 | file offset 0x0013C7E8 | FUN_0893f810 | bytes 120 */

void FUN_0893f810(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((param_1 != 0) && (*(short *)(param_1 + 4) != 0)) {
    puVar2 = *(undefined4 **)(param_1 + 8);
    iVar1 = 0;
    if ((puVar2 != (undefined4 *)0x0) && (*(short *)(param_1 + 4) != 0)) {
      do {
        (*(code *)*puVar2)();
        iVar1 = iVar1 + 1;
        puVar2 = puVar2 + 1;
      } while (iVar1 < (int)(uint)*(ushort *)(param_1 + 4));
    }
  }
  return;
}

