/* Entry 0x08933ACC | file offset 0x00130AA4 | FUN_08933acc | bytes 128 */

void FUN_08933acc(char *param_1,char param_2)

{
  undefined4 uVar1;
  undefined1 auStack_110 [256];
  
  FUN_08933b4c(param_1);
  *param_1 = param_2;
  FUN_08933a80(param_1,(int)*param_1,auStack_110,0x100);
  uVar1 = FUN_089331fc(auStack_110,0);
  *(undefined4 *)(param_1 + 4) = uVar1;
  (*(code *)(&PTR_FUN_089d85d0)[*param_1])();
  return;
}

