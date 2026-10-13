/* Entry 0x089B0FE0 | file offset 0x001ADFB8 | FUN_089b0fe0 | bytes 244 */

void FUN_089b0fe0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (8 < param_3) {
    param_3 = 8;
  }
  if (param_1 != 0) {
    if ((param_2 != 0) && (param_3 != 0)) {
      if ((int)(uint)*(ushort *)(param_1 + 0x1a) < param_3) {
        iVar1 = FUN_089ab5ec(0,0x10,param_3 << 2);
        *(int *)(param_1 + 0xc) = iVar1;
        if (iVar1 == 0) {
          return;
        }
        *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 0x40000;
        *(ushort *)(param_1 + 2) = *(ushort *)(param_1 + 2) | 0x100;
      }
      FUN_08935524(*(undefined4 *)(param_1 + 0xc),param_2,param_3 << 2);
      *(short *)(param_1 + 0x1a) = (short)param_3;
      return;
    }
    thunk_FUN_089abeac(0,*(undefined4 *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(ushort *)(param_1 + 2) = *(ushort *)(param_1 + 2) & 0xfeff;
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffbffff;
    *(undefined2 *)(param_1 + 0x1a) = 0;
  }
  return;
}

