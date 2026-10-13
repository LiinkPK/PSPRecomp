/* Entry 0x088AF620 | file offset 0x000AC5F8 | FUN_088af620 | bytes 256 */

void FUN_088af620(int param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (param_4 != '\0') {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    FUN_088b16fc(DAT_089d7280);
    iVar2 = *(int *)(param_1 + 0xc);
  }
  *(undefined4 *)(iVar2 + 0x2b30) = param_2;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2b34) = param_3;
  if (*(short *)(&DAT_089d7140 + *(int *)(*(int *)(param_1 + 0xc) + 0x2b30) * 0x10) == 0) {
    FUN_088af424(param_1,0,0);
  }
  else {
    uVar1 = FUN_0887afbc(*(undefined4 *)(DAT_089d712c + 0xee0),
                         *(short *)(&DAT_089d7140 +
                                   *(int *)(*(int *)(param_1 + 0xc) + 0x2b30) * 0x10),0);
    FUN_088b1230(DAT_089d727c,uVar1,FUN_088afb64,0,
                 *(undefined4 *)(&DAT_089d7144 + *(int *)(*(int *)(param_1 + 0xc) + 0x2b30) * 0x10),
                 *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2b34));
  }
  return;
}

