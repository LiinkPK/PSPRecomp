/* Entry 0x08972EBC | file offset 0x0016FE94 | FUN_08972ebc | bytes 352 */

void FUN_08972ebc(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (*param_1 + *(int *)(*param_1 + 0x18) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *param_1 + *(int *)(*param_1 + 0x18) + 0x10;
  }
  if (iVar1 != 0) {
    piVar2 = (int *)(*param_1 + *(int *)(*param_1 + 0x18));
    iVar4 = *piVar2;
    iVar1 = piVar2[1] * 4;
    puVar3 = (undefined4 *)(&DAT_089d066c + iVar1);
    FUN_089a0fe8(*puVar3,0,0xff,0);
    if (param_2 == 0) {
      FUN_089a1024(iVar4 / *(int *)(&DAT_089d067c + iVar1),param_3);
    }
    else if (DAT_089da320 == 0) {
      local_2c = 0;
      FUN_08974630(param_2,&local_2c,*puVar3,iVar4,param_3,*(undefined4 *)(*param_1 + 4));
    }
    else {
      local_30 = FUN_089a0144(0);
      FUN_08974630(param_2,&local_30,*puVar3,iVar4,param_3,*(undefined4 *)(*param_1 + 4));
      FUN_089a0180(local_30);
    }
  }
  return;
}

