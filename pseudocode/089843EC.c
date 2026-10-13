/* Entry 0x089843EC | file offset 0x001813C4 | FUN_089843ec | bytes 284 */

void FUN_089843ec(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (param_1 != (int *)0x0) {
    piVar3 = (int *)param_1[1];
    param_1[5] = (int)&DAT_089dd210;
    iVar2 = DAT_09b6f478;
    if (piVar3 != (int *)0x0) {
      if (*piVar3 != 0) {
        iVar1 = FUN_08971010(*(undefined4 *)(DAT_09b6f478 + 0x18),*piVar3);
        iVar2 = iVar2 + (uint)*(ushort *)(*(int *)(*(int *)(iVar2 + 0x88) + 0x1c8) + 0x18) * 4;
        *(int *)(iVar2 + 0xb4) = *(int *)(iVar2 + 0xb4) - iVar1;
      }
      iVar2 = DAT_09b6f478;
      if (piVar3 != (int *)0x0) {
        iVar1 = FUN_08971010(*(undefined4 *)(DAT_09b6f478 + 0x18),piVar3);
        iVar2 = iVar2 + (uint)*(ushort *)(*(int *)(*(int *)(iVar2 + 0x88) + 0x1c8) + 0x18) * 4;
        *(int *)(iVar2 + 0xb4) = *(int *)(iVar2 + 0xb4) - iVar1;
      }
    }
    iVar2 = DAT_09b6f478;
    if (*param_1 != 0) {
      iVar1 = FUN_08971010(*(undefined4 *)(DAT_09b6f478 + 0x18),*param_1);
      iVar2 = iVar2 + (uint)*(ushort *)(*(int *)(*(int *)(iVar2 + 0x88) + 0x1c8) + 0x18) * 4;
      *(int *)(iVar2 + 0xb4) = *(int *)(iVar2 + 0xb4) - iVar1;
    }
    if ((param_2 & 1) != 0) {
      FUN_0898d4ac(param_1,0x18);
    }
  }
  return;
}

