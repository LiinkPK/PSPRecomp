/* Entry 0x089A6300 | file offset 0x001A32D8 | FUN_089a6300 | bytes 100 */

undefined4 FUN_089a6300(int param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0x80650200;
  if ((((((param_2 | param_3) & 0xf) == 0) && (uVar1 = 0x80650200, 0 < (int)param_2)) &&
      ((int)param_2 <= (int)(uint)*(ushort *)(param_1 + 0x218))) &&
     (uVar1 = 0x80650200, 0 < (int)param_3)) {
    if ((int)param_3 <= (int)(uint)*(ushort *)(param_1 + 0x21a)) {
      *(short *)(param_1 + 0x216) = (short)((int)param_3 >> 4);
      uVar1 = 0;
      *(short *)(param_1 + 0x214) = (short)((int)param_2 >> 4);
    }
  }
  return uVar1;
}

