/* Entry 0x088DE400 | file offset 0x000DB3D8 | FUN_088de400 | bytes 428 */

undefined4
FUN_088de400(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined1 param_5,undefined4 param_6,undefined4 param_7,char param_8)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  FUN_088de378();
  if (param_2 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = FUN_088823c4(param_2,param_3,param_4,FUN_088de5ac,"Update");
    *(int *)(param_1 + 0x10) = iVar1;
    if (iVar1 == 0) {
      uVar2 = 0xfffffffe;
    }
    else {
      *(undefined1 **)(iVar1 + 4) = param_1;
      iVar1 = FUN_088d0700(DAT_089d7830,param_5,param_6,param_7);
      *(int *)(param_1 + 4) = iVar1;
      if (iVar1 == 0) {
        uVar2 = 0xfffffffd;
      }
      else {
        *(undefined1 *)(iVar1 + 0x16) = 2;
        *(undefined1 *)(*(int *)(param_1 + 4) + 0x15) = 200;
        FUN_088cff30(DAT_089d7830,*(undefined4 *)(param_1 + 4));
        puVar5 = param_1 + 0x80;
        if (param_8 == '\x01') {
          *(byte *)(*(int *)(param_1 + 4) + 0x14) = *(byte *)(*(int *)(param_1 + 4) + 0x14) | 0x20;
        }
        puVar3 = param_1 + 0x14;
        FUN_088df11c(puVar3,param_8);
        FUN_088dea18(param_1 + 0x30,*(undefined4 *)(param_1 + 4),puVar3,puVar5);
        iVar1 = 0;
        uVar2 = *(undefined4 *)(param_1 + 4);
        puVar4 = param_1 + 0x48;
        do {
          FUN_088ded68(puVar4,uVar2,puVar3,puVar5,iVar1);
          iVar1 = iVar1 + 1;
          puVar4 = puVar4 + 0x1c;
          uVar2 = *(undefined4 *)(param_1 + 4);
        } while (iVar1 < 2);
        FUN_088df650(puVar5,uVar2);
        param_1[8] = param_8;
        *param_1 = 1;
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

