/* Entry 0x089B1644 | file offset 0x001AE61C | FUN_089b1644 | bytes 140 */

void FUN_089b1644(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(uint *)(&DAT_089d1f64 + param_2 * 4);
    *(short *)(param_1 + 8) = (short)param_2;
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfe9ffffe | uVar1;
    if ((uVar1 & 1) == 0) {
      *(ushort *)(param_1 + 0x14) = *(ushort *)(param_1 + 0x14) & 0xfffe;
    }
    else {
      *(ushort *)(param_1 + 0x14) = *(ushort *)(param_1 + 0x14) | 1;
      *(ushort *)(param_1 + 0x16) = *(ushort *)(param_1 + 0x16) & 0xfffe;
    }
    if ((uVar1 & 0x200000) == 0) {
      *(undefined1 *)(param_1 + 0x12) = 7;
      return;
    }
    *(undefined1 *)(param_1 + 0x12) = 1;
  }
  return;
}

