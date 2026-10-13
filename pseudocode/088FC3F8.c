/* Entry 0x088FC3F8 | file offset 0x000F93D0 | FUN_088fc3f8 | bytes 400 */

void FUN_088fc3f8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_60 [64];
  
  iVar2 = *(int *)(param_1 + 0x30);
  if (*(int *)(iVar2 + 0xef0) != 0) {
    FUN_0887ba5c(*(int *)(iVar2 + 0xef0));
    *(undefined4 *)(*(int *)(param_1 + 0x30) + 0xef0) = 0;
    iVar2 = *(int *)(param_1 + 0x30);
  }
  if (*(int *)(iVar2 + 0xf24) != 0) {
    FUN_0887ba5c(*(int *)(iVar2 + 0xf24));
    *(undefined4 *)(*(int *)(param_1 + 0x30) + 0xf24) = 0;
    iVar2 = *(int *)(param_1 + 0x30);
  }
  if (*(int *)(iVar2 + 0xf3c) != 0) {
    FUN_0887ba5c();
    *(undefined4 *)(*(int *)(param_1 + 0x30) + 0xf3c) = 0;
  }
  uVar1 = FUN_08885cc8(0,0,0);
  *(undefined4 *)(*(int *)(param_1 + 0x30) + 0xef0) = uVar1;
  uVar1 = FUN_08885cc8(1,0,0);
  *(undefined4 *)(*(int *)(param_1 + 0x30) + 0xf24) = uVar1;
  uVar1 = FUN_08885cc8(2,0,0);
  iVar2 = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x30) + 0xf3c) = uVar1;
  iVar3 = 0;
  do {
    if (*(int *)(*(int *)(param_1 + 0x30) + iVar3 + 0xf40) != 0) {
      FUN_0887ba5c();
      *(undefined4 *)(*(int *)(param_1 + 0x30) + iVar3 + 0xf40) = 0;
    }
    iVar2 = iVar2 + 1;
    FUN_0893476c(auStack_60,&DAT_089cd06c,iVar2);
    FUN_0887df14(DAT_089d6998,*(int *)(param_1 + 0x30) + 0xf9e,0x80,auStack_60);
    uVar1 = FUN_0887d868(DAT_089d6998,0,*(int *)(param_1 + 0x30) + 0xf9e,0xffffffff,0,0,0,0);
    *(undefined4 *)(*(int *)(param_1 + 0x30) + iVar3 + 0xf40) = uVar1;
    iVar3 = iVar3 + 4;
  } while (iVar2 < 9);
  return;
}

