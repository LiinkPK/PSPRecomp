/* Entry 0x088EA7B8 | file offset 0x000E7790 | FUN_088ea7b8 | bytes 176 */

void FUN_088ea7b8(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_40 [32];
  
  iVar3 = 0;
  while (iVar1 = FUN_0885ca3c(param_2,0xe,iVar3), iVar1 != 0) {
    FUN_0893476c(auStack_40,"rt_event_%d",iVar3);
    uVar2 = FUN_088a0dbc(DAT_089d6c80,auStack_40,*(undefined4 *)(iVar1 + 8),
                         *(undefined4 *)(iVar1 + 0xc),1);
    *param_1 = uVar2;
    iVar3 = iVar3 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

