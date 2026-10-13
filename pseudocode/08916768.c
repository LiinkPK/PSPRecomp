/* Entry 0x08916768 | file offset 0x00113740 | FUN_08916768 | bytes 236 */

void FUN_08916768(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_90 [128];
  int local_10;
  
  if (*(char *)(*(int *)(param_1 + 0x54) + 6) != -1) {
    local_10 = param_1;
    uVar1 = FUN_088a51c0(0xe5800,"worldmap bgm");
    *(undefined4 *)(local_10 + 0x758) = uVar1;
    uVar1 = FUN_088a5208(uVar1);
    *(undefined4 *)(local_10 + 0x75c) = uVar1;
    FUN_088a18b0(DAT_089d6c88,100,0);
    iVar2 = FUN_0889f3e4(DAT_089d6c30,*(undefined1 *)(*(int *)(local_10 + 0x54) + 6));
    FUN_0893476c(auStack_90,"bgm/%s",iVar2 + 0x1c);
    uVar1 = FUN_08862c40(auStack_90,1);
    FUN_08862854(auStack_90,*(undefined4 *)(local_10 + 0x75c),uVar1,1);
    FUN_0889f290(DAT_089d6c30,*(undefined4 *)(local_10 + 0x75c),uVar1);
  }
  return;
}

