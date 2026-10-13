/* Entry 0x088D9F5C | file offset 0x000D6F34 | FUN_088d9f5c | bytes 200 */

void FUN_088d9f5c(int param_1,int param_2,char param_3)

{
  if (param_2 == -1) {
    *(undefined2 *)(param_1 + 0xc) = 0xffff;
    *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & 0xfff7;
    FUN_088d9d24(param_1);
  }
  else if ((*(short *)(param_1 + 0xc) != param_2) || (param_3 != '\0')) {
    *(short *)(param_1 + 0xc) = (short)param_2;
    *(undefined2 *)(param_1 + 0xe) = 0xffff;
    *(undefined2 *)(param_1 + 0x22) = 0xffff;
    FUN_088d9a94(param_1);
    *(undefined4 *)(param_1 + 8) = 0x3f800000;
    *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & 0x2000;
    *(undefined4 *)(param_1 + 4) = 0xbf800000;
    *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) | 0x1a;
    FUN_088d9d24(param_1);
    FUN_088dac1c(*(undefined4 *)(param_1 + 0x24),(int)*(short *)(param_1 + 0xc));
  }
  return;
}

