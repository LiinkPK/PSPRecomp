/* Entry 0x089A6364 | file offset 0x001A333C | FUN_089a6364 | bytes 172 */

undefined4 FUN_089a6364(undefined4 *param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  uVar1 = 0x80650205;
  if ((((((uint)param_1 & 0xf) == 0) && (uVar1 = 0x80650200, ((param_2 | param_3) & 0xf) == 0)) &&
      (uVar1 = 0x80650200, param_2 - 1 < 0xffff)) && (uVar1 = 0x80650200, param_3 - 1 < 0xffff)) {
    puVar2 = param_1;
    do {
      *puVar2 = 0;
      puVar3 = puVar2 + 2;
      puVar2[1] = 0;
      puVar2 = puVar3;
    } while (param_1 + 0xa0 != puVar3);
    param_1[0x81] = param_4 + param_5 + -4;
    uVar1 = 0;
    *(short *)(param_1 + 0x85) = (short)((int)param_2 >> 4);
    *(short *)((int)param_1 + 0x216) = (short)((int)param_3 >> 4);
    *(undefined1 *)((int)param_1 + 0x20d) = 0x40;
    *(undefined1 *)(param_1 + 0x87) = 3;
    *(short *)(param_1 + 0x86) = (short)param_2;
    *(short *)((int)param_1 + 0x21a) = (short)param_3;
    param_1[0x80] = param_4;
  }
  return uVar1;
}

