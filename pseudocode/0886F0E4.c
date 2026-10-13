/* Entry 0x0886F0E4 | file offset 0x0006C0BC | FUN_0886f0e4 | bytes 344 */

void FUN_0886f0e4(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_e0 [96];
  undefined1 auStack_80 [20];
  byte local_6c [64];
  
  FUN_08935828(local_6c,0,0x40);
  if (param_2 < 0x41) {
    FUN_08935524(local_6c,param_1,param_2);
  }
  else {
    FUN_089400b0(param_1,param_2,local_6c);
  }
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 1;
    local_6c[iVar2] = local_6c[iVar2] ^ 0x36;
    iVar2 = iVar1;
  } while (iVar1 < 0x40);
  FUN_0899f3fc(auStack_e0);
  FUN_0899f030(auStack_e0,local_6c,0x40);
  FUN_0899f030(auStack_e0,param_3,param_4);
  FUN_0899f200(auStack_e0,auStack_80);
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 1;
    local_6c[iVar2] = local_6c[iVar2] ^ 0x6a;
    iVar2 = iVar1;
  } while (iVar1 < 0x40);
  FUN_0899f3fc(auStack_e0);
  FUN_0899f030(auStack_e0,local_6c,0x40);
  FUN_0899f030(auStack_e0,auStack_80,0x14);
  FUN_0899f200(auStack_e0,param_5);
  return;
}

