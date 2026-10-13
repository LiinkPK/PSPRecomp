/* Entry 0x0892E488 | file offset 0x0012B460 | FUN_0892e488 | bytes 300 */

void FUN_0892e488(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,
                 undefined1 *param_5,undefined4 param_6,undefined4 param_7)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 auStack_70 [64];
  undefined1 *local_30;
  
  local_30 = auStack_70;
  uVar4 = param_4;
  puVar1 = auStack_70;
  if (param_4 < 0x1f) {
    uVar4 = (int)(param_4 * 4) >> 2;
    puVar1 = auStack_70;
    switch(param_4) {
    case 0:
    case 1:
    case 7:
    case 8:
    case 10:
    case 0x1e:
      local_30 = auStack_70;
      FUN_089347e8(auStack_70,&DAT_089cef60,param_5);
      puVar1 = local_30;
      break;
    case 2:
    case 3:
    case 5:
    case 6:
      puVar1 = param_5;
      break;
    case 4:
      iVar2 = FUN_088bb88c();
      puVar1 = local_30;
      if (iVar2 != 0) {
        uVar3 = FUN_0887afbc(&DAT_09b4e838,*(undefined1 *)(iVar2 + 0xc),0);
        FUN_089347e8(auStack_70,&DAT_089cef68,uVar3);
        puVar1 = local_30;
      }
    }
  }
  local_30 = puVar1;
  FUN_0892dc48(0x42f00000,param_1,param_2,param_3,uVar4,&local_30,param_6,param_7);
  return;
}

