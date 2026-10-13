/* Entry 0x08813484 | file offset 0x0001045C | FUN_08813484 | bytes 140 */

uint FUN_08813484(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 *param_6,int *param_7)

{
  uint uVar1;
  
  *param_2 = 0;
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  *param_6 = 0;
  uVar1 = *(byte *)(param_1 + 0x35) - 0xb;
  if ((uVar1 < 5) && (*(int *)(param_1 + 0x30) != 0)) {
    *param_2 = *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x18);
    *param_3 = *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x1c);
    *param_4 = *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x20);
    *param_5 = *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x24);
    *param_6 = *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x28);
    *param_7 = (int)*(short *)(*(int *)(param_1 + 0x30) + 0x2c);
  }
  return uVar1;
}

