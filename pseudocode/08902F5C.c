/* Entry 0x08902F5C | file offset 0x000FFF34 | FUN_08902f5c | bytes 316 */

undefined4 FUN_08902f5c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_30 [4];
  undefined4 local_2c;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  undefined4 local_18;
  
  if (param_2 < *(int *)(param_1 + 0x188)) {
    iVar2 = param_1 + param_2 * 0x18;
    FUN_08935828(auStack_30,0,0x1c);
    local_2c = *(undefined4 *)(iVar2 + 0x18);
    local_28 = *(undefined1 *)(iVar2 + 8);
    local_27 = *(undefined1 *)(iVar2 + 9);
    local_26 = *(undefined1 *)(iVar2 + 10);
    local_25 = *(undefined1 *)(iVar2 + 0xb);
    local_24 = *(undefined1 *)(iVar2 + 0xc);
    local_23 = *(undefined1 *)(iVar2 + 0xd);
    local_22 = *(undefined1 *)(iVar2 + 0xe);
    local_21 = *(undefined1 *)(iVar2 + 0xf);
    local_20 = *(undefined1 *)(iVar2 + 0x10);
    local_1f = *(undefined1 *)(iVar2 + 0x11);
    local_1e = *(undefined1 *)(iVar2 + 0x12);
    local_1d = *(undefined1 *)(iVar2 + 0x13);
    local_1c = *(undefined1 *)(iVar2 + 0x14);
    local_1b = *(undefined1 *)(iVar2 + 0x15);
    local_1a = *(undefined1 *)(iVar2 + 0x16);
    local_19 = *(undefined1 *)(iVar2 + 0x17);
    local_18 = *(undefined4 *)(iVar2 + 0x1c);
    iVar2 = sceNetAdhocctlJoin(auStack_30);
    if (iVar2 < 0) {
      uVar1 = 0;
    }
    else {
      FUN_08903370(param_1,param_3,param_4);
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

