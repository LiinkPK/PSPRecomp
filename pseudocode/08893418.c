/* Entry 0x08893418 | file offset 0x000903F0 | FUN_08893418 | bytes 200 */

void FUN_08893418(undefined4 param_1,undefined1 param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_60;
  undefined1 local_5c;
  
  FUN_08893cf8(DAT_089d6ac8);
  iVar1 = FUN_08893cf8(DAT_089d6ac8);
  if (iVar1 != 0) {
    local_60 = 0x2f70616d;
    local_5c = 0;
    uVar2 = FUN_0889381c(DAT_089d6ac8);
    FUN_08935914(&local_60,uVar2);
    FUN_08935c7c(&local_60,&DAT_089ca7ac);
    FUN_08935914(&local_60,&DAT_089ca7b0);
    FUN_08892940(DAT_089d6ac8,&local_60,param_1,param_2,param_3,param_4);
  }
  return;
}

