/* Entry 0x088D5638 | file offset 0x000D2610 | FUN_088d5638 | bytes 300 */

void FUN_088d5638(int param_1,int param_2,undefined4 param_3,undefined1 param_4,ushort *param_5,
                 uint param_6,uint param_7,int param_8,uint uStackX_0)

{
  if ((0 < param_1) && (param_1 < 0x23)) {
    FUN_088d0984(DAT_089d7830,*(undefined4 *)(param_2 + (param_6 & 0xffff) * 4),param_4,
                 ((uint)*param_5 + param_1) - 1 & 0xffff);
    FUN_088d0984(DAT_089d7830,*(undefined4 *)(param_2 + (param_7 & 0xffff) * 4),param_4,
                 ((uint)param_5[1] + param_1) - 1 & 0xffff);
  }
  if ((0 < param_8) && (param_8 < 0x23)) {
    FUN_088d0984(DAT_089d7830,*(undefined4 *)(param_2 + (uStackX_0 & 0xffff) * 4),param_4,
                 ((uint)*param_5 + param_8) - 1 & 0xffff);
  }
  return;
}

