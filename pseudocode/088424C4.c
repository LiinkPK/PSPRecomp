/* Entry 0x088424C4 | file offset 0x0003F49C | FUN_088424c4 | bytes 396 */

void FUN_088424c4(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 auStack_150 [256];
  char *local_50 [4];
  char *local_40;
  undefined4 local_3c;
  int local_38;
  int *local_34;
  
  puVar4 = auStack_150;
  local_3c = DAT_089d6c80;
  local_50[0] = "%s%s[se_0]";
  local_50[1] = "%s%s[se_1]";
  local_50[2] = "%s%s[voice]";
  local_40 = "_zako";
  iVar3 = 0;
  local_50[3] = "";
  local_38 = param_2;
  local_34 = param_1;
  do {
    if (*param_1 != 0) {
      uVar1 = FUN_088a0cf8(*param_1);
      if ((*(byte *)(local_38 + 8) & 1) == 0) {
        FUN_0893476c(auStack_150,*(undefined4 *)(puVar4 + 0x100),param_2 + 0x34,local_50[3]);
      }
      else {
        FUN_0893476c(auStack_150,*(undefined4 *)(puVar4 + 0x100),param_2 + 0x34,local_40);
      }
      if ((iVar3 == 2) && ((char)local_34[9] == '\x01')) {
        FUN_08935914(auStack_150,"(rare)");
      }
      iVar2 = FUN_088a0dbc(local_3c,auStack_150,uVar1,param_1[1],0);
      param_1[2] = iVar2;
    }
    iVar3 = iVar3 + 1;
    param_1 = param_1 + 3;
    puVar4 = puVar4 + 4;
  } while (iVar3 < 3);
  return;
}

