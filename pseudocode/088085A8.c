/* Entry 0x088085A8 | file offset 0x00005580 | FUN_088085a8 | bytes 416 */

void FUN_088085a8(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_a0 [48];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_48;
  undefined4 local_44;
  
  iVar2 = 0;
  local_48 = param_3;
  local_44 = param_1;
  do {
    iVar1 = FUN_0880966c(local_44,param_2,local_48,param_4,iVar2 != 0);
    if (iVar1 != 0) {
      if ((*(uint *)(*(int *)(iVar1 + 0xc0) + 0x38) & 0x40) == 0) {
        FUN_088369a4(param_2,auStack_a0,param_5);
        FUN_088a7284(local_70,local_6c,local_68,iVar1);
      }
      else {
        FUN_088a6a38(0xbf800000,iVar1,2,param_2 + 0x4c8,0xffffffff,0xffffffff);
      }
      *(undefined4 *)(iVar1 + 0xe0) = DAT_089d5eac;
      FUN_08828638(iVar1);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  return;
}

