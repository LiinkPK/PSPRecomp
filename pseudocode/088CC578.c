/* Entry 0x088CC578 | file offset 0x000C9550 | FUN_088cc578 | bytes 196 */

void FUN_088cc578(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_50 [64];
  undefined1 auStack_10 [4];
  
  if (param_1[2] != 0) {
    FUN_088da0a8(*param_1,0,auStack_50,auStack_10);
    FUN_0887b778(param_1[2],auStack_50);
    FUN_0887b828(param_1[2],auStack_10);
    FUN_0887b970(param_1[2]);
    FUN_0887b9a4(param_1[2]);
    iVar1 = (int)*(short *)(*param_1 + 0xc);
    iVar3 = *(int *)(*(int *)(*param_1 + 0x24) + 0xc);
    uVar2 = uRam00000008;
    if (iVar1 < *(int *)(iVar3 + 0x2c)) {
      uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0xc) + iVar1 * 0x1c + 8);
    }
    FUN_0887b900(param_1[2],uVar2);
  }
  return;
}

