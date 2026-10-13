/* Entry 0x088ACDF8 | file offset 0x000A9DD0 | FUN_088acdf8 | bytes 232 */

void FUN_088acdf8(int param_1,int param_2,undefined4 param_3,char param_4)

{
  undefined4 uVar1;
  
  if (param_4 != '\0') {
    *(uint *)(param_1 + 0xef8) = *(uint *)(param_1 + 0xef8) & 0xfffffffd;
    FUN_088b16fc(DAT_089d7280);
  }
  *(int *)(param_1 + 0xeac) = param_2;
  *(undefined4 *)(param_1 + 0xeb0) = param_3;
  if (*(short *)(&DAT_089d6de8 + param_2 * 0x10) == -1) {
    FUN_088acafc(DAT_089d712c,0,0);
  }
  else {
    uVar1 = FUN_0887afbc(*(undefined4 *)(param_1 + 0xee0),*(short *)(&DAT_089d6de8 + param_2 * 0x10)
                         ,0);
    FUN_088b1230(DAT_089d727c,uVar1,FUN_088acdd0,0,
                 *(undefined4 *)(&DAT_089d6dec + *(int *)(param_1 + 0xeac) * 0x10),
                 *(undefined4 *)(param_1 + 0xeb0));
  }
  return;
}

